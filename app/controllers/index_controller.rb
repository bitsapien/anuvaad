class IndexController < ApplicationController
  def index
      
  end

  def login
  end

  def authenticate
    name = params[:name]
    key = params[:key]
    if name == '<none>' and key == '<none>'
      session['user'] = '<none>'
    end
    redirect_to '/'
  end
  
  def logout
    reset_session
    redirect_to '/'
  end
end
