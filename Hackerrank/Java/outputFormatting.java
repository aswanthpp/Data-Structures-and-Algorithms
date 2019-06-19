import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                int l=s1.length();
                System.out.print(s1);
                for(int j=0;j<15-l;j++){
                    System.out.print(" ");
                }
                //Complete this line
                if(x<=9 && x>=0){
                  System.out.print("00"+x);    
                }
                else if(x>=100)
                System.out.print(x);
                else
                System.out.print("0"+x);

                System.out.print("\n");
            }
            System.out.println("================================");

    }
}
