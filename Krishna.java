// Java program to find the
// sum in given range L to R
import java.util.*;

class Krishna{
	
// Function to find the sum
// within the given range
public static int findSum(int L, int R)
{
	ArrayList<Integer> arr = new ArrayList<>();

	// Generating array from given sequence
	int i = 0;
	int x = 2;
	while (i <= R)
	{
		arr.add(i + x);

		if (i + 1 <= R)
			arr.add(i + 1 + x);

		x *= -1;

		i += 2;
	}

	// Calculate the desired sum
	int sum = 0;

	for(i = L; i <= R; ++i)
	sum += arr.get(i);

	// return the sum
	return sum;
}

// Driver code
public static void main(String[] args)
{
	
	// Initialise the range
	int L = 0, R = 5;

	System.out.println(findSum(L, R));
}
}
