public class palindrome {
    public static void main(String[] args) {
        int n=221, r=0, t=n;
        while(t!=0) { 
            r = r*10 + t%10; 
            t/=10; 
        }
        System.out.println(n + (n==r ? " is" : " is not") + " a palindrome");
    }
}