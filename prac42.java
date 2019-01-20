interface base
{	 public void out();
}

class derived implements base
{	public void out()
	{	System.out.println("Interface done ");
	}
}

class prac42
{	public static void main(String args[])
	{	derived d=new derived();
		d.out();
	}
}
	
 
