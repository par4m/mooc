const button = document.querySelector('button')
const ul = document.querySelector('ul')

button.addEventListener('click', () => {
  const li = document.createElement('li')
  li.textContent = 'something new to do '
  ul.prepend(li)
  /* ul.append(li) */
})

const items = document.querySelectorAll('li')

items.forEach((item) => {
  item.addEventListener('click', (e) => {
    /* console.log('item is ' + item.innerText) */
    console.log('event in Li')
    e.target.remove()
  })
})

ul.onclick = () => {
  console.log('event in UL')
}

/* button.addEventListener('click', () => { }) */

/* button.onclick = () => { */
/* alert */
/* } */
