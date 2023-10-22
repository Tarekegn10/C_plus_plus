function twosum(arr,target){
	var sum;
	for(var i=0,j=0;i<arr.length && j<arr.length;i++ && j++){
		
		sum=arr[i]+arr[j];
		if(sum==target){
			
			console.log("Are the numbers",arr[i]," and ",arr[j]);
			
		}
		
		
	}
    if(sum!==target){ 
        console.log("none found");
    }
	return "finished";

}
var rock=[1,2,3,4,5,6];
twosum(rock,19);
