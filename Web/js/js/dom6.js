/* const content = document.querySelector('p') */

/* console.log(content.classList) */
/* content.classList.add('error') */
/* content.classList.remove('error') */
/* content.classList.add('success') */

const p = document.querySelectorAll('p')
console.log(p)

p.forEach((para) => {
  console.log(para.textContent)
  if (para.textContent.includes('error')) {
    para.classList.add('error')
  } else if (para.textContent.includes('success')) para.classList.add('success')
})

const title = document.querySelector('.title')
title.classList.toggle('test')
title.classList.toggle('test')
title.classList.toggle('test')
title.classList.toggle('test')
