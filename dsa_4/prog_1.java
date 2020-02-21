package dsa_4;
import java.util.*;

class Node
{
	protected int regd_no;
	protected float mark;
	protected Node next;
}

public class prog_1 
{
   static Node start = null;
	public static void create()
    {
    	
    	Scanner s = new  Scanner  (System.in);
    	Node c = new Node();
    		System.out.println("enter the rerno and mark of the first node : ");
    	c.regd_no =s.nextInt();
    	c.mark =s.nextFloat();
    	start = c;
    	c.next=null;
    	System.out.println("Do you want to  continue (y/n)? ");
    	char ch = s.next().charAt(0);
    	while (ch =='y'||ch == 'Y')
    	{
    	    c = new Node();
    		System.out.println("enter the regno and mark of the next  node : ");
        	c.regd_no =s.nextInt();
        	c.mark =s.nextFloat();
    	 c.next = null;
    	Node l =start;
		l.next =c;
    	 l=l.next;
    	 System.out.println("Do you want to  continue (y/n)? ");
     	 ch = s.next().charAt(0);
    	 
    	}
    	
    }
	public static void traverse ()
	{
		Node c;
		if (start == null)
			System.out.println("EMPTY LIST");
		else 
		 System.out.println("the single linked list is :");
		c =start;
		while(c!=null)
		{
			System.out.println(c.regd_no+" "+c.mark);
		
		c=c.next;
		}	
	}
	public static void insertfront(int r,float m)
	{
		Node c =new Node();
		c.regd_no= r;
		c.mark=m;
		c.next=start;
		start = c;
	}
	public static void insertend(int r,float m)
	{
		Node c = new Node();
        c.regd_no =r;
        c.mark =m;
        Node l = start;
        while (l.next!=null)
        {
        	l=l.next;
        }
        l.next=c;
        }
	public static int count()
	{
		if(start == null)
			return 0;
		else
		{
			Node t = start ;
			int c = 0;
			while(t!=null)
			{
				c++;
				t =t.next;
				
			}
			return c;
		}
	}
        public static void insertanypos(int item1,float item2,int pos)
        {
        	Node c = new Node();
        	c.regd_no =item1;
        	c.mark=item2;
        	int i =1;
        	Node l =start;
        	while(i<pos-1)
        	{
        		i=i+1;
        		l=l.next;
        		l.next =c;	
        	}
        }
	public static void deletefront()
	{
		Node c;
		if(start == null)
			System.out.println("empty list");
		else
		{
			c =start;
			start =start.next;
			c.next = null;
			System.out.println("deleted node is "+c.regd_no+" "+c.mark);
		}
	}
	public static void deleteback()
	{
		Node l,p;
		if(start == null)
			System.out.println("empty list");
		else
		{
			l=start;
			while (l.next!=null)
			{
				p=l;
				l=l.next;
			}
			}
		}
	public static void deleteanypos(int pos)
	{
		Node l,p = null;
		if(start == null)
			System.out.println("empty list");
		else
		{
			int i =1;
			l=start;
			while(i<pos)
			{
				p=l;
				l=l.next;
				i=i+1;
			}
			p.next=l.next;
			l.next =null;
			System.out.println("deleted node is "+l.regd_no+" "+l.mark);
			
			}
		}
	public static boolean search(int k,float m)
	{
		boolean f =false;
		if (start ==null)
			return f;
		else
		{
			Node c = start;
			while (c!=null)
			{
				if(c.regd_no==k)
				{
					f =true;
					c.mark =m;
					break;
				}
			}
			return f;
		}
	}
	public static void sort()
	{
		Node i,j;
		for(i =start;i.next!=null;i =i.next)
		{
			for (j =i.next;j!=null;j =j.next)
			{
				if(i.mark<j.mark)
				{
				 float t =i.mark;
				 i.mark=j.mark;
				 j.mark=t;
				}
			}
		}
	}
	public static void deletefrom_reg(int v)
	{
		Node l,n=null;
		if  (start == null)
			System.out.println("empty list");
		else 
		{
			l =start;
			while(l.regd_no!=v)
			{
				l =l.next;
				l.next =n.next;
				n.next = null;
				System.out.println("deleted node is "+l.regd_no+" "+l.mark);
			}
		}
	}
	public static void reverse()
	{
		Node c,n,r;
		if  (start == null)
			System.out.println("empty list");
		else if(start.next ==null)
			System.out.println("reverse of list is same ");
		else 
		{
			r =start;
			c =r.next;
			r.next =null;
			while (c!= null)
			{
				n = c.next;
				c.next = r;
				r =c;
				c =n;
			}
			start = r;
			}
	}

	public static void main(String[] args)
	{ 
		int opt;
		Scanner s = new Scanner (System.in);
		char q;
		do
		{
			System.out.println("***********MENU*********");
		System.out.println("0. exit\n1.CREATE\n2.TRAVERSE\n 3.INSERTION AT FRONT\nINSERTION AT BACK END\ncount the no of nodes\n6.insert at any position.\n7.deletion at front end\n8. deletion at back end\n9.deletion at any point\n10.searching using registration number\n11. sort according to mark\n12. delete using registration number\n 13.reverse the list  ");
			System.out.println("enter your choice ");
			opt = s.nextInt();
			switch(opt)
			{
			case 0: System.exit(0);
			case 1 :
				    create();
				    break;
			case 2:
				  traverse();break;
			case 3: 
				int r;
				float m;
				Scanner sc = new Scanner (System.in);
				r =sc.nextInt();
				m =sc.nextFloat();
				insertfront(r,m);
				break;
			case 4:
						int r1 = 0;
					float m1 = 0;
					Scanner s1 = new Scanner (System.in);
					r =s1.nextInt();
					m =s1.nextFloat();
					insertend(r1,m1);
					break;
			case 5 : int c =count();
			System.out.println("no of nodes = "+c);
			case 6 :System.out.println("enter position>1&position<= "+count());
			        int p =s.nextInt();
			        System.out.println("enter regno and marks ");
			        int re =s.nextInt();
			        float ma =s.nextFloat();
			        insertanypos(re,ma,p);
			        break;
			case 7: deletefront();
			break;
			case 8 : deleteback();
			break;
		    case 9:
		    	System.out.println("enter position>1&position<= "+count());
		        int p1 =s.nextInt();
		        System.out.println("enter regno and marks ");
		        int re1 =s.nextInt();
		        float ma1 =s.nextFloat();
		        deleteanypos(p1);
		        break;
		    case 10 : 
		    	System.out.println("enter regno and marks ");
		        int reg =s.nextInt();
		        float mar =s.nextFloat();
		        boolean f =search(reg,mar);
		        if (f== false)
		        	System.out.println(" node not present.");
		        else 
		        	System.out.println("node present.");
		        break;
		    case 11: 
		    	 sort();
		    	 break;
		    case 12 :
		    	System.out.println("enter regno and marks ");
		        int reg1 =s.nextInt();
		        deletefrom_reg(reg1);
		        break;
		    case 13 :
		    	reverse();
		    	default : System.out.println(" invalid choice!!!");
			}
			System.out.println("do you want to enter any other choice (y/n) ");
	       q =s.next().charAt(0);	
		}while (q =='y'||q=='Y');
		 

	}

}
