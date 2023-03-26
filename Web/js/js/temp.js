// Template Strings / Literals

const title = 'Best reads of 2019'
const author = 'Mario'
const likes = 30

// Concatenation Way

console.log('Using Concatenation Way')

let res =
  'The blog called ' + title + ' by ' + author + ' has ' + likes + ' likes'
console.log(res)

// Template String Way
let result = `The blog called ${title} by ${author} has ${likes} likes`
console.log(result)

// creating html templates

let html = `

<h2> ${title} </h2>
<p> By ${author} </p>
<span> This blog has ${likes} </span>
`
console.log('Using HTML Template')
console.log(html)
