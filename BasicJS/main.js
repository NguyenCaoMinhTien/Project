let n=prompt("Nhập số lượng phần tử của mảng:");
let a=[];
let sum=0;
for(var i=0;i<n;i++){
    var x=prompt("Nhập giá trị phần tử thứ " + Number(i+1) + " của mảng:");
    a.push(x);
    sum+=Number(x);
}
const MAX=Math.max(...a);
const MIN=Math.min(...a);
console.log("Danh sách các phần tử trong mảng hiện có: " + a);
console.log("Phần tử có giá trị lớn nhất trong mảng là: " + MAX);
console.log("Phần tử có giá trị nhỏ nhất trong mảng là: " + MIN);
console.log("Tổng tất cả giá trị các phần tử trong mảng là: " + sum);
let y=prompt("Nhập vị trí của phần tử mà bạn muốn xóa trong mảng:");
a.splice(y-1,1);
console.log("Danh sách các phần tử sau khi xóa phần tử ở vị trí thứ " + y + " là: " + a);
