const form = document.querySelector('.signup-form')
const feedback = document.querySelector('.feedback')
const user = document.querySelector('#username')
form.onsubmit = (e) => {
  e.preventDefault()
  /* console.log(username.value) */
  /* console.log(form.username.value) */

  // validation
  const username = form.username.value
  const usernamePattern = /^[a-zA-Z]{6,12}$/
  if (usernamePattern.test(username)) {
    // feeback good info
    feedback.textContent = 'this username is valid'
  } else {
    // feeback bad info
    feedback.textContent =
      'username must contain letters only & be between 6 & 12 characters long'
  }
}

// live feedback
form.username.oninput = (e) => {
  /* console.log(e.target.value, form.username.value) */
  const username = form.username.value
  const usernamePattern = /^[a-zA-Z]{6,12}$/
  if (usernamePattern.test(username)) {
    // feeback good info
    /* feedback.textContent = 'this username is valid' */
    form.username.setAttribute('class', 'success')
  } else {
    // feeback bad info
    feedback.textContent =
      'username must contain letters only & be between 6 & 12 characters long'

    form.username.setAttribute('class', 'error')
  }
}
