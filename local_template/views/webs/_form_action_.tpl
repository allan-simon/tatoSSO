<% c++ #include "contents/%%CONTROLLER_NAME%%.h" %>
<% skin %>
<% view %%VIEW_NAME%% uses tatosso::contents::%%CONTROLLER_NS%%::%%CONTENT_NAME%% extends master %>
<% template title() %><% gt "TODO TITLE" %><% end template %>


<% template body() %> 
    Edit Me %%CONTROLLER_NAME%% / %%CONTENT_NAME%%
    <form method="POST" action="<% url "/%%CONTROLLER_URL%%/%%FORM_TREAT_URL%%" %>" >
        <% form as_p %%FORM_VAR%% %>
    </form>
<% end template %>



<% end view %>
<% end skin %>

