const form = document.querySelector('.signup-form')
const username = document.querySelector('#username')

form.onsubmit = (e) => {
  e.preventDefault()
  /* console.log(username.value) */
  console.log(form.username.value)
}

// testing RegEx

const user = 'shaunp'
const pattern = /^[a-z]{6,}$/
let result = pattern.test(user)
console.log(result)

if (result) {
  console.log('regex test passed')
} else {
  console.log('regex test failed')
}

let res = user.search(pattern)
console.log(res)
