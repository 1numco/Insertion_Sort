import java.util.Scanner;

public class Insertion_sort {
	
	static void sort_des(int[] mass)
	{
		int temp, j;
		for (int i = 1; i < mass.length; i++)
		{
			temp = mass[i];
			j = i;
			while (j > 0 && mass[j - 1] < temp)
			{
				mass[j] = mass[j - 1];
				j -= 1;
			}
			mass[j] = temp;
		}
	}
	static void sort_as(int[] mass)
	{
		int temp, j;
		for (int i = 1; i < mass.length; i++)
		{
			temp = mass[i];
			j = i;
			while (j > 0 && mass[j - 1] > temp)
			{
				mass[j] = mass[j - 1];
				j -= 1;
			}
			mass[j] = temp;
		}
	}

	public static void main(String[] args) {
		int n = 0;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter size of array");
		n=in.nextInt();
		int[] mass = new int[n];
		for(int i=0;i<n;i++)
		{
			mass[i] = (int) ( Math.random() * 1000);
			System.out.print(mass[i]+" ");
		}
		short a=0;
		System.out.println();
		System.out.println("Choose how to sort: ascending or descending(enter 1 or 2 respectively).");
		a=in.nextShort();
		switch(a)
		{
			case 1:sort_as(mass); break;
			case 2:sort_des(mass); break;
			default: break;
		}
		System.out.print("The array is sorted: ");
		for(int i=0;i<n;i++)
		{
			System.out.print(mass[i]+" ");
		}	
		
		
	}

}
