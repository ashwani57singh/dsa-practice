package Recursion;
import java.io.*;
import java.net.*;

class Serverfile {
    public static void main(String args[]) {
        try {
            ServerSocket server = new ServerSocket(5000);
            System.out.println("Server is running...");

            while (true) {
                Socket socket = server.accept();

                DataInputStream din = new DataInputStream(socket.getInputStream());
                DataOutputStream dout = new DataOutputStream(socket.getOutputStream());

                String filename = din.readLine();
                System.out.println("Client requested file: " + filename);

                FileReader fr = new FileReader(filename);
                BufferedReader br = new BufferedReader(fr);

                String line;
                while ((line = br.readLine()) != null) {
                    System.out.println(line);
                    dout.writeBytes(line + "\n");
                }

                br.close();
                dout.writeBytes("-1\n"); // End signal
                socket.close();
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}