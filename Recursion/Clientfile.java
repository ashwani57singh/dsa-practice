package Recursion;
import java.io.*;
import java.net.*;

class Clientfile {
    public static void main(String args[]) {
        try {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

            Socket socket = new Socket("127.0.0.1", 5000);

            DataInputStream din = new DataInputStream(socket.getInputStream());
            DataOutputStream dout = new DataOutputStream(socket.getOutputStream());

            System.out.print("Enter the file name: ");
            String filename = in.readLine();

            dout.writeBytes(filename + "\n");

            System.out.print("Enter the new file name: ");
            String newFile = in.readLine();

            FileWriter fw = new FileWriter(newFile);

            String line;
            while (true) {
                line = din.readLine();
                if (line.equals("-1"))
                    break;

                System.out.println(line);
                fw.write(line + "\n");
            }

            fw.close();
            socket.close();

        } catch (Exception e) {
            System.out.println(e);
        }
    }
}