import java.util.*;
class gcd
{
        static int gcd1(int a, int b)
        {
                if(a % b == 0)
                {
                        return b;
                }
                int r = a % b;
                return gcd1(b,r);
        }
        public static void main(String args[])
        {
                Scanner sc = new Scanner(System.in);
                int a = sc.nextInt();
                int b = sc.nextInt();
                System.out.println(gcd1(a,b));
        }
}

