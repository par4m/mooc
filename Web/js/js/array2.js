// reduce method

const scores = [10, 20, 60, 40, 70, 90, 30]

const result = scores.reduce((acc, curr) => {
  if (curr > 50) {
    acc++
  }
  return acc
}, 0)

console.log(result)

const sco = [
  { player: 'mario', score: 50 },
  { player: 'yoshi', score: 30 },
  { player: 'mario', score: 70 },
  { player: 'crystal', score: 60 },
]

const marioTotal = sco.reduce((acc, curr) => {
  if (curr.player == 'mario') {
    acc += curr.score
  }
  return acc
}, 0)

console.log(marioTotal)

// find method
const sc = [10, 5, 0, 40, 30, 10, 90, 70]

const firstHighScore = sc.find((score) => {
  return score > 50
})

console.log(firstHighScore)
