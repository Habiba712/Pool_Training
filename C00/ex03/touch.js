

const printer = (m)=>{
	console.log(m);

}
const idk = (n)=>{
	if (n < 9) {
	idk(n / 10);
	}
	printer(n % 10);

}

	idk(123);

