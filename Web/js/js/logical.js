// else if statements
const password = 'p@ssw'

if (password.length >= 12 && password.includes('@')) {
  console.log('that password is mighty strong')
} else if (
  password.length >= 8 ||
  (password.includes('@') && password.length >= 5)
) {
  console.log('that password is strong enough')
} else {
  console.log('password should be at least 8 characters long')
}
