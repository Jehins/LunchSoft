global using Lunchsoft;
using Blazorise;
using Blazorise.Bootstrap;
using Lunchsoft.Client;
using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");


builder.Services
    .AddBlazorise(options =>
    {
        options.Immediate = true;
    })
    .AddBootstrapProviders();

builder.Services.AddHttpClient("Lunchsoft.ServerAPI", ( client)=>{

    
client.BaseAddress = new Uri(builder.HostEnvironment.BaseAddress);
    Lunchsoft.Shared.Url.Dominio = builder.HostEnvironment.BaseAddress;
} );

#if DEBUG
Lunchsoft.Shared.Url.Dominio = "http://localhost:5188/";
#elif RESEALE
Lunchsoft.Shared.Url.Dominio = "http://lunchsoft.somee.com/";
#endif


// Supply HttpClient instances that include access tokens when making requests to the server project
builder.Services.AddScoped(sp => sp.GetRequiredService<IHttpClientFactory>().CreateClient("Lunchsoft.ServerAPI"));

await builder.Build().RunAsync();







class Persona
{



    void Imprimir()
    {
        var s = Edad();
    }




    int Edad()
    {
        return 1;   
    }



}