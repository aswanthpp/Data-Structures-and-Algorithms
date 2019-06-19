import java.util.*;
import java.io.*;
import java.lang.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            for(int j=1;j<=n;j++){
                int s=(int)(Math.pow(2,j));
                s=(s-1)*b + a;
                System.out.print(s+" ");
            }
            System.out.println();

        }
        in.close();
    }
}

