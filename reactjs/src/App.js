function Box(props) {
  return(
          <div className="box">
              <div className="img"><img src={props.image}></img></div>
              <div className="h3">{props.title}</div>
              <div className="p">{props.content}</div>
          </div>
  )
}
function App() {
  return (
    <div style={{backgroundColor:'#F1F1F1',height:'100vh'}}>
      <div class="heading">How Does It Work</div> 
      <h5>Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia</h5>
      <h5>deserunt mollit anim id est laborum.</h5> 
      <div className="container">
      <Box image="https://cdn-icons-png.flaticon.com/128/2928/2928788.png" title="International Shipping" content="You can now buy product from USA stores that do not ship internationally.How? Place an order on our website and we'll buythe items on your behalf and ship them to your international address."></Box>
      <Box image="https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcSebkEW2M0q6_IYglZ2a3RppR_eg2XV5FKsgr3tS2biiXpIf7c1" title="Access & Discover" content="Get access to exclusive products that are not available in your country. New brands and stores are added to our platform daily.You can rely on Big Apple Buddy to help you discover the lastest products from the USA."></Box>
      <Box image="https://encrypted-tbn3.gstatic.com/images?q=tbn:ANd9GcSJ0Fiw11lnFTxeiwrIc7WqwXexK-FO0F2odmzapM4_htaNLjUj" title="One Stop Shop" content="We're the only platform in the world that allows you to shop hundreds of USA stores with just one checkout.No need to place multiple orders on multiple sites.Shopping has never been easier!"></Box>
      <Box image="https://encrypted-tbn2.gstatic.com/images?q=tbn:ANd9GcS4lrPrxg1jMw_vkfr-D04CjPJgmlXEEGggvxWWFWAW-zdEk_e9" title="Unrivalled Product Range" content="Our platform features millions of tech,fashion,beauty,outdoor & fitness products from USA.Can't find what you are looking for on our website?Get in touch and we'll personally source the item for you."></Box>
      <Box image="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQzlGwWQxoNTqryFZCkgxQBnUB3fco7KHkX83imt82Q0nRrcV5L" title="Transparents Pricing" content="We value transparency as much as you do.We will always provide a breakdown of costs so you can see exactly how your oder is calculated.No hidden fees-that's our promise!"></Box>
      <Box image="https://cdn-icons-png.flaticon.com/128/2839/2839208.png" title="Personalized Service" content="We understand that every purchase is unique which is why your order will be handled personally by a member of our team from start to finish.All enquiries will be answered within 24 hours,7 days a week."></Box>
    </div>
    <div className="containerbutton">
      <button>LEARN MORE</button>
    </div>
    </div>
  )
}
export default App;
