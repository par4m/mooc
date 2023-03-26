// arguments & parameters

const speak = function(name = 'luigi', time = 'night') {
  console.log(`good ${time}, ${name}!`)
}

speak('mario', 'morning')
// speak();
speak('shaun')

const calcArea = function(radius) {
  return 3.14 * radius ** 2
}

const a = calcArea(5)
console.log(a)
