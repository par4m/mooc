let age // undefined right now
/* console.log(age, age + 3, `the age is ${age}`) */

age = null
/* console.log(age, age + 3, `the age is ${age}`) */

// booleans & exp
console.log(true, false)

// methods can return booleans
let email = 'luigi@thenetninja.co.uk'
let names = ['mario', 'luigi', 'toad']
let result = email.includes('@')
console.log(result)
result = names.includes('bowser')
console.log(result)

// Comparison Operators

age = 25
console.log(age == 25)
console.log(age < 20)
console.log(age >= 25)

let name = 'shaun'
console.log(name == 'shaun')
console.log(name == 'Shaun')
console.log(name > 'crystal')
console.log(name > 'Shaun')
console.log(name > 'Crystal')

// Loose vs Strict Comparison
console.log('Loose')
age = 25

// loose comparison (different datatypes can still be equal)

console.log(age == 25)
console.log(age == '25') // js does a type conversion in the background
console.log(age != 25)
console.log(age != 25)

// strict comparison (different types cannot be equal)

console.log('Strict')
console.log(age === 25)
console.log(age === '25')
console.log(age !== 25)
console.log(age !== '25')

console.log('Type Conversion')

// Type Conversion

let score = '100'
console.log(typeof score)
score = Number(score)
console.log(score + 1)
console.log(typeof score)

// Str to Num -> NaN
result = Number('hello')
console.log(result)

// Num to str
result = String(50)
console.log(result, typeof result)

// To Bool

// 0 is fale rest True
// Strings of any length are true
// Empty string is false
result = Boolean(100)
console.log(result, typeof result)
result = Boolean(0)
console.log(result, typeof result)
result = Boolean('0') // 0 as a string
console.log(result, typeof result)
result = Boolean('') // empty string -> False
console.log(result, typeof result)
