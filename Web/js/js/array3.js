// example 1 - sorting strings
const names = ['mario', 'shaun', 'chun-li', 'yoshi', 'luigi']

names.sort()
console.log(names)
names.reverse()
console.log(names)

// example 2 - sorting numbers
// looks at just first number and not the double digit as a whole
const scores = [10, 50, 20, 5, 35, 70, 45]
scores.sort()
console.log(scores) // [10,20,35,45,5,50,70]
scores.reverse()
console.log(scores)
scores.sort((a, b) => a - b) // lowest to highest
// example 3 - sorting objects
const players = [
  { name: 'mario', score: 20 },
  { name: 'luigi', score: 10 },
  { name: 'chun-li', score: 50 },
  { name: 'yoshi', score: 30 },
  { name: 'shaun', score: 70 },
]

players.sort((a, b) => {
  if (a.score > b.score) {
    return -1
  } else if (b.score > a.score) {
    return 1
  } else {
    return 0
  }
})

console.log(players)

// shorter way of doing this
players.sort(a, (b) => b.score - a.score) // highest to lowest
console.log(players)
