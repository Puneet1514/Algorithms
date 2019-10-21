import java.util.Scanner;
import java.lang.Math;
class rabin_karp_code
{
	static String st, st1;
	static int t, l, l1, q = 11;
	static long p, p1;
	public static void main(String args[])
	{
		
		Scanner sc = new Scanner(System.in);

		t = sc.nextInt();
		sc.nextLine();
		
		while(t-- > 0)
		{
			int sum = 0;
			st = sc.nextLine();
			st1 = sc.nextLine();
			l = st.length();
			l1 = st1.length();
			long h = 0;

			for(int i = 0; i < l1; i++)
			{
				h = (h + (((int)st1.charAt(i) - 48) * (long)(Math.pow(10, l1 - 1 - i))) % q) % q;
			}
		
			long h1 = 0;

			for(int i = 0; i < l1; i++)
                        {
                                h1 = (h1 + (((int)st.charAt(i)-48) * (long)(Math.pow(10, l1 - 1 - i)) % q)) % q;
                        }
		

			if( h1 % q== h % q )
			{
				++sum;
			}

			for(int i = 1; i <= l - l1; i++ )
			{
				h1 =( (h1 - (((long)st.charAt(i - 1)-48) * (long)Math.pow(10, l1 - 1)  ))* 10 + ((long)st.charAt(i + l1 - 1) -48)% q ) % q;
				
				if( h1 < 0 )
				{
					if( h1 + q == h )
					{
						sum++;
					}
				}	
				else
				{
					if(h1 % q == h % q)
				{
					++sum;
				}
				}
			}

			System.out.println(sum);
		}
	}
}
