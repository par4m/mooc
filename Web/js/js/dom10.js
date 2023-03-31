const copy = document.querySelector('.copy-me')

copy.oncopy = () => {
  console.log('my content is copyright')
}

const box = document.querySelector('.box')

box.onmousemove = (e) => {
  /* console.log(e.offsetX, e.offsetY) */
  box.textContent = `x position is ${e.offsetX} y pos = ${e.offsetY}`
}

document.onwheel = (e) => {
  console.log(e.pageX, e.pageY)
}
