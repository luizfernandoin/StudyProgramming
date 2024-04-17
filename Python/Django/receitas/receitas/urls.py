from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('', include("APPreceitas.urls")),
    path('admin/', admin.site.urls),
]
