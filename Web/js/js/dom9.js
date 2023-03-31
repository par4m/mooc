const button = document.querySelector('button')
const ul = document.querySelector('ul')

button.addEventListener('click', () => {
  const li = document.createElement('li')
  li.textContent = 'something new to do '
  ul.prepend(li)
  /* ul.append(li) */
})

const items = document.querySelectorAll('li')

/* items.forEach((item) => { */
/*   item.addEventListener('click', (e) => { */
/* console.log('item is ' + item.innerText) */
/*     e.stopPropagation() */
/*     console.log('event in Li') */
/*     e.target.remove() */
/*   }) */
/* }) */
/**/
ul.onclick = (e) => {
  /* console.log('event in UL') */
  console.log(e.target)
  if (e.target.tagName === 'LI') {
    e.target.remove()
  }
}

/* button.addEventListener('click', () => { }) */

/* button.onclick = () => { */
/* alert */
/* } */
