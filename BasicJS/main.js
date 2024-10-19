var n=prompt("Nhập số lượng phần tử của mảng:");
const maxn=1e6+7;
var a=[maxn];
var MAX=Number.MIN_VALUE;
var MIN=Number.MAX_VALUE;
var sum=0;
for(let i=0;i<n;i++){
    a[i]=prompt("Nhập giá trị phần tử thứ " + Number(i+1) + " của mảng:");
    MAX=Math.max(MAX,a[i]);
    MIN=Math.min(MIN,a[i]);
    sum+=Number(a[i]);
}
console.log("Danh sách các phần tử trong mảng hiện có: " + a);
console.log("Phần tử có giá trị lớn nhất trong mảng là: " + MAX);
console.log("Phần tử có giá trị nhỏ nhất trong mảng là: " + MIN);
console.log("Tổng tất cả giá trị các phần tử trong mảng là: " + sum);
var x=prompt("Nhập vị trí của phần tử mà bạn muốn xóa trong mảng:");
a.splice(x-1,1);
console.log("Danh sách các phần tử sau khi xóa phần tử ở vị trí thứ " + x + " là: " + a);