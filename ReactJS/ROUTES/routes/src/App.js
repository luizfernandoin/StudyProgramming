import './App.css';

// 1 - config react routes
import { BrowserRouter, Routes, Route, Navigate } from 'react-router-dom';

// Components
import Navbar from './components/Navbar';
import SearchForm from './components/SearchForm';

// pages
import Home from './pages/Home';
import About from './pages/About';
import Product from './pages/Product';
import Info from './pages/Info';
import NotFound from './pages/NotFound';
import Search from './pages/Search';

function App() {
  return (
    <div className="App">
      <h1>React Routes</h1>
      <BrowserRouter>
        <Navbar />
        {/* search forms */}
        <SearchForm />
        <Routes>
          <Route path='/' element={<Home />} />
          <Route path='/about' element={<About />} />

          {/* rotas dinâmicas */}
          <Route path='/products/:id' element={<Product />} />

          {/* search */}
          <Route path='/search' element={<Search />} />

          {/* nested route */}
          <Route path='/products/:id/info' element={<Info />} />

          {/* Redirect */}
          <Route path='/company' element={<Navigate to="/about" />} />

          {/* No match route */}
          <Route path='*' element={<NotFound />} />
        </Routes>
      </BrowserRouter>
    </div>
  );
}

export default App;
