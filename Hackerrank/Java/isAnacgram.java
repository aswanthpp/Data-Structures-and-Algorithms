import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        // Complete the function
    int map[]=new int[26];
        for(int i=0;i<26;i++){
            map[i]=0;
        }
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)>='a'){
                map[a.charAt(i)-'a']++;
            }else{
                map[a.charAt(i)-'A']++;
            }
        }
        for(int i=0;i<b.length();i++){
            if(b.charAt(i)>='a'){
                map[b.charAt(i)-'a']--;
            }else{
                map[b.charAt(i)-'A']--;
            }
        }
        for(int i=0;i<26;i++){
            if(map[i]!=0){
                return false;
            }
        }

        return true;

     }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
