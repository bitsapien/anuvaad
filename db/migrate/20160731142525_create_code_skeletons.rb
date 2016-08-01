class CreateCodeSkeletons < ActiveRecord::Migration
  def change
    create_table :code_skeletons do |t|
      t.string :name
      t.text :comments
      t.text :variables
      t.string :languages_used
      t.references :task
    end
  end
end
