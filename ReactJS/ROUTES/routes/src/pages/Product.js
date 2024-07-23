import { Link, useParams } from "react-router-dom";
import { useFetch } from "../hooks/useFetch";

const Product = () => {
    const {id} = useParams();

    // Carregamento dado individual
    const url = "http://localhost:3000/products/" + id;
    const { data: product, loading, error } = useFetch(url); 
    
    console.log(product);

    return (
        <>
            {error && <p>Ocorreu um erro!</p>}
            {loading && <p>Carregando...</p>}
            {product && (
                <div>
                    <h1>{product.name}</h1>
                    <p>R${product.price}</p>

                    {/* Nested Route */}
                    <Link to={`/products/${product.id}/info`}>Mais informações</Link>
                </div>
            )}
        </>
    )
}

export default Product