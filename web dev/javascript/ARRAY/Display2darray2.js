// to print element in coloumn wise 
function display2dArray(grid){
    let str="";
    // grid.length gives no of rows
    // grid[0].length gives no of columns
    // grid[i][j] gives element at ith row and jth column

    for(let j=0;j<grid[0].length;j++){
        for(let i=0;i<grid.length;i++){
            str+=grid[i][j]+" "; // element at ith row and jth column
        }
        //str+="\n"; // new line after each row
    }
    console.log(str); // 1 3 7 2 4 8 5 6 9 10 
}
let grid=[[1,2,4,5],[3,4,5,6],[7,8,9,10]];
display2dArray(grid); // 1 3 7 2 4 8 5 6 9 10