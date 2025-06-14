export function formatDate(date) {
  return new Date(date).toLocaleDateString()
}

export function formatNumber(num) {
  return num.toString().replace(/(\d)(?=(\d{3})+(?!\d))/g, '$1,')
} 