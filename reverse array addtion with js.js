function sum(arr1,arr2){
	let size=arr1.length+arr2.length;
	let s=[];
	let arrnum1=0;
	let arrnum2=0;
	let ch;
	for(let i=0,j=0;i<arr1.length && i<arr2.length;i++){
		ch=Math.pow(10,i)
		
		//console.log("the power is: ",ch);
		arrnum1=arrnum1+(arr1[i]*ch);
		arrnum2=arrnum2+(arr2[i]*ch);
		console.log("the sum to arr1: ",arrnum1);
		console.log("the sum to arr2: ",arrnum2);
		
	}
	let arrnum3=arrnum1+arrnum2;
	let num3=arrnum3.toString();
	console.log("in string arrnum3", num3);
	let lg=num3.length;
	for(let i=0,j=0;i<=lg;lg--,j++){
	    
	    s[j]=num3[lg];
	    
	    console.log("the value of lg in loop ",lg);
	    console.log("the value of s in loop ",s[lg]);
	    console.log("the value of num3 in loop ",num3[lg]);
	    
	}
    s.shift();
	return s;
	
	
	}
let arr1=[1,2,3];
let arr2=[4,5,6];
let m=sum(arr1,arr2);
console.log("the value of is ",m);
