function printNumbers(n) {
	    if (n > 9) {
		            printNumbers(Math.floor(n / 10));
		        }
	    process.stdout.write(String(n % 10));
}

printNumbers(123);
process.stdout.write("\n");
