@product @product-view @stability @api
Feature: View product
  Benefit: In order to view textual information on the site
  Role: AN
  Goal/desire: View product

  Scenario: As a AN I should be able to see page
    Given I am an anonymous user
    Given I am viewing a "product":
      | title                   | TITLE-ONE           |
      | body                    | BODY-CONTENT1       |
      | field_tags              | Tag1                |
      | field_publication_date  | 2026-06-27 00:00:00 |
    Then I should not see the link "Edit" in the "Main content"
    And I should see "TITLE-ONE"
    And I should see "BODY-CONTENT1"

  Scenario: As a AN I should see metatags
    Given I am an anonymous user
    When I go to "/product-metatag-test"
    And I see the metatag "description" with "This is a small description."
    And I see the metatag "keywords" with "keyword1, keyword2"
    And I see the title meta with "Metatag title"
