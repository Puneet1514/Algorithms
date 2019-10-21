import java.util.Arrays;
import java.util.Comparator;

class ItemValue  
{ 
        Double cost; 
        double wt, val, ind; 
          
        
        public ItemValue(int wt, int val, int ind) 
        { 
            this.wt = wt; 
            this.val = val; 
            this.ind = ind; 
            cost = new Double(val/wt ); 
        } 
}

class knapsack
{
	public static void main(String args[])
	{
		int wt[] = {10,40,20,30};
		int val[] = {60,40,100,120};
		int capacity = 50;
		
		double maxval =getmaxvalue(wt,val,capacity);
		System.out.println(maxval);

	}

	private static double getmaxvalue(int wt[],int val[],int capacity)
	{
		ItemValue[] ival = new ItemValue[wt.length];
		
		for(int i = 0; i <4; i++)
		{
			ival[i]= new ItemValue(wt[i],val[i],i);
		}

		Arrays.sort(ival, new Comparator<ItemValue>()
				{
					@Override
					public int compare(ItemValue a, ItemValue b)
					{
						return b.cost.compareTo(a.cost);
					}
				});

		double totalval = 0;

		for(ItemValue i : ival)
		{
			int curwt = (int)i.wt;
			int curval = (int)i.val;

			if(capacity - curwt >= 0)
			{
				capacity = capacity - curwt;
				totalval += curval;
			}

			else
			{
				double fraction = ((double)capacity/(double)curwt);
				totalval += (curval * fraction);
				break;
			}
		}

		return totalval;
	}
}
