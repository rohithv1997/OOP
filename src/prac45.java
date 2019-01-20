
class base extends Thread
{	public void run()
	{	System.out.println("In Base Thread");
	}
}
class der extends Thread
{	public void run()
	{	try
		{	Thread.sleep(1000);
			System.out.println("In Second Thread");
		}
		catch(InterruptedException e)
		{	System.out.println(e);
		}
	}
}
public class prac45 
{	public static void main(String args[])
	{	Thread me= new base();
		me.start();
		Thread u=new der();
		u.start();
	}

}
