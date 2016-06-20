// Name : Little Sisters
using System;
namespace Application {
	class little_sisters {
		public static void Main(string[] args) {
			// input:
			// a : size
			// b : size
			// x : ratio
			// y : ratio
						Scanner in = new Scanner(System.in);
		String[] elements = (Console.ReadLine()).Split(" ");
		int a = Convert.ToInt32(elements[0]);
		int b = Convert.ToInt32(elements[1]);
		int x = Convert.ToInt32(elements[2]);
		int y = Convert.ToInt32(elements[3]);


			// write your code here
			// store your results in `new_size_x`,`new_size_y`

			// output
					Console.WriteLine(new_size_x+" "+new_size_y);

	}	
	}}