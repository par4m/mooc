let ninjas = ['shaun', 'ryu', 'chun-li']

console.log(ninjas)
console.log(ninjas[0]) // shaun
console.log(ninjas[1]) // ryu
console.log(ninjas[2]) // chun-li

ninjas[1] = 'ken'
console.log(ninjas[1])

let ages = [20, 25, 30, 35]

console.log(ages[2])

let random = ['shaun', 'crystal', 30, 20]

// Array Methods
// length
console.log(ninjas.length)

// join

let result = ninjas.join(',')
console.log(result)
result = ninjas.join('-')
console.log(result)

// indexOf
result = ninjas.indexOf('chun-li')
console.log(result)

// concat - join two arrays together
result = ninjas.concat(['ken', 'crystal'])
console.log(result)

// push - push new value to the array
result = ninjas.push('ken')
console.log(result)

// pop - takes off end value
result = ninjas.pop()
console.log(result)
console.log(ninjas) // last element deleted
