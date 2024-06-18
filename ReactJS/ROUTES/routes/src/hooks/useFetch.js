import { useEffect, useState } from "react";

export const useFetch = (url) => {
    const [data, setData] = useState(null);

    const [config, setConfig] = useState();
    const [method, setMethod] = useState();
    const [callFetch, setCallFetch] = useState();

    // loading
    const [loading, setLoading] = useState(false);

    // tratando erros
    const [error, setError] = useState(null);

    // delete
    const [productId, setProductId] = useState(null);

    const httpConfig = (data, method) => {
        if (method === "POST") {
            setConfig({
                method: "POST",
                headers: {
                    "Content-Type": "application/json"
                },
                body: JSON.stringify(data)
            });

            setMethod(method);
        } else if (method === "DELETE") {
            setConfig({
                method: "DELETE",
                headers: {
                    "Content-Type": "application/json"
                },
            })

            setMethod(method);
            setProductId(data);
        }
    }
    
    useEffect(() => {
        const fetchData = async () => {
            // loading
            setLoading(true);

            try {
                const res = await fetch(url);
                const data = await res.json();
                setData(data);
            } catch (error) {
                console.log(error.message);
                setError("Houve algum erro ao carregar os dados.");
            }

            setLoading(false);
        }
        
        fetchData();
    }, [url, callFetch])

    useEffect(() => {
        const httpRequest = async () => {
            let json;

            if (method === "POST") {
                let fetchOptions = [url, config];
                const res = await fetch(...fetchOptions);
                json = await res.json();
    
            } else if (method === "DELETE") {
                const deleteURL = `${url}/${productId}`;
                const res = await fetch(deleteURL, config);
                json = await res.json();

            }

            setCallFetch(json);
        };

        httpRequest();
    }, [config, method, url])

    return { data, httpConfig, loading, error };
}
