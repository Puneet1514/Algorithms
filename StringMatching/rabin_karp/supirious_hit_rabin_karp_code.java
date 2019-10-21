import java.util.Scanner;
import java.lang.Math;
class supirious_hit_rabin_karp_code
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
                                h = (h + (Long.parseLong(""+st1.charAt(i))) % q )% q;
                        }

			
			long h1 = 0;

			for(int i = 0; i < l1; i++)
                        {
                                h1 = (h1 + (Long.parseLong(""+st.charAt(i))) % q )% q;
                        }
		
		
			if( h1 == h  )
			{
				++sum;
			}

			for(int i = 1; i <= l - l1; i++ )
			{
				h1 = (h1 - (Long.parseLong(""+st.charAt(i))) % q + (((Long.parseLong(""+st.charAt(l1 - 1 +i))) % q )))%q ;
				if( h1 < 0 )
				{
					if( h1 + q == h )
					{
						sum++;
					}
				}	
				else
				{
					if(h1 %q == h%q )
				{
					++sum;
				}
				}
			}

			System.out.println(sum);
		}
	}
}
