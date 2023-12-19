const colors=["r","g","b","y"];
let isStart=true;
let TEAMS=[];
let pairs=[];
function putBlock(i,j,id) {
    document.getElementById(id).innerHTML+=`<div class="${colors[i]} teams" id="${colors[i]}${j}"><p>${i}X${j}</p></div>`;
  
}

function rand(max){
  return Math.floor(Math.random() * max); 
}
function colorToNumber(col) {
  switch (col) {
    case "r": return 0;
    case "g": return 1;
    case "b": return 2;
    case "y": return 3;
    default:
      return -1;
  }
}
function suffle() {

  document.getElementById("grid").innerHTML='';
  let teams=[];
  for(let i=0;i<TEAMS.length;i++){
    let team=[...TEAMS[i]];
    teams.push(team);
  }
  pairs=[];
  console.log(TEAMS);
  console.log(teams);
  for(let i=0; i<teams.length;i++){
    for(let j=0; j<teams[i].length;j++){
      let currentBlock=teams[i][j];

      if(currentBlock==0) continue;

      let ri, iterations=0;
      do {
        ri=rand(teams.length);
        if(teams[ri][j] && teams[ri][j][0]!=currentBlock[0] && teams[ri][j]!=0){
          break;
        }
        
        iterations++;
      } while (iterations<1000);
      
      pairs.push([currentBlock, teams[ri][j]]);
      teams[i][j]=0;
      teams[ri][j]=0;

      // console.log(pairs);
    }
  }


  for(let i=0;i<pairs.length;i++){
    document.getElementById("grid").innerHTML+=`<div class="pairCont grid" id="pairCont${i}"></div>`;
    let n1=colorToNumber(pairs[i][0][0]);
    let n2=colorToNumber(pairs[i][1][0]);
    let i1=pairs[i][0][1];
    let i2=pairs[i][1][1];
    putBlock(n1,i1,`pairCont${i}`);
    putBlock(n2,i2,`pairCont${i}`);
  }
  for(let p=0;p<pairs.length;p++){
    let ri=rand(TEAMS.length);
    let rj=rand(TEAMS[ri].length);
    TEAMS[ri].splice(rj,1);
    
  } 
  
}

function makeGrid() {
  if(!isStart){suffle(); return;}
  isStart=false;
  document.getElementById("mainButton").innerHTML="next stage";
  for (let i=0;i<4;i++){
    let currentTeam=[];
    for(let j=0;j<4;j++){
      currentTeam.push(colors[i]+""+j);
      putBlock(i,j,"grid");
    }
    TEAMS.push(currentTeam);
  }  
}

