// no of row =grid.length;
function diplay2dArray(grid){
    let  str="";
    // print the whole grid row by row
    // grid.length gives no of rows
    // grid[0].length gives no of columns
    // grid[i][j] gives element at ith row and jth column

    for(let i=0;i<grid.length;i++){
        for(let j=0;j<grid[0].length;j++){
            str+=grid[i][j]+" "; // element at ith row and jth column
        }
        str+="\n"; // new line after each row
    }
    console.log(str); // 1 2 4 5 3 4 5 6 7 8 9 10
    //return str;
}

let grid=[[1,2,4,5],[3,4,5,6],[7,8,9,10]];
diplay2dArray(grid); // 1 2 4 5 3 4 5 6 7 8 9 10
