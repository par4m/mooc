let email = 'mario@thenetninja.co.uk'

let result = email.lastIndexOf('n')
console.log(result)

let nresult = email.slice(4, 10)

let presult = email.substring(4, 10)

console.log(nresult)
console.log(presult)

let qresult = email.replace('n', 'w') // replaces only first n with w
