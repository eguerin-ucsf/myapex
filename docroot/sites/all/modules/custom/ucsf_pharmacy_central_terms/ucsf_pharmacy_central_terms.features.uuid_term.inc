<?php
/**
 * @file
 * ucsf_pharmacy_central_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ucsf_pharmacy_central_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Geriatrics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '26',
    'uuid' => '071acd29-87fb-4444-9e4c-e665c20bd1f4',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Cardiovascular',
    'description' => NULL,
    'format' => NULL,
    'weight' => '29',
    'uuid' => '077a799c-8454-4616-bb5f-0088ca2bff51',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'HIV antiretroviral therapy adherence',
    'description' => NULL,
    'format' => NULL,
    'weight' => '11',
    'uuid' => '0bb58b87-7755-4400-a3df-974687ff0d97',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Alternative medicine',
    'description' => '',
    'format' => 'webedit',
    'weight' => '37',
    'uuid' => '1166df81-df5d-4116-9a84-b78a6af4f1d2',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Pediatrics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '15',
    'uuid' => '12c2e180-6b67-411f-a060-01b92c1835a5',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Anticoagulation',
    'description' => NULL,
    'format' => NULL,
    'weight' => '41',
    'uuid' => '15ad4d7c-65b7-49a7-b03c-73d7d5496000',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Drug design',
    'description' => '',
    'format' => 'webedit',
    'weight' => '52',
    'uuid' => '24b7833f-d785-47a1-a878-495cc6c12203',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Anti-viral and anti-malarial drugs',
    'description' => '',
    'format' => 'webedit',
    'weight' => '38',
    'uuid' => '26ba2e88-c3e2-446a-bda6-36da985d291f',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Pharmacotherapy',
    'description' => NULL,
    'format' => NULL,
    'weight' => '20',
    'uuid' => '282d9db2-6cd3-4dd3-ae79-e6fbc3e143ef',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Clinical research',
    'description' => '',
    'format' => 'webedit',
    'weight' => '9',
    'uuid' => '2ce47bc2-faa6-4bb5-9b9a-4a9992243e26',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Bone marrow transplantation',
    'description' => '',
    'format' => 'webedit',
    'weight' => '35',
    'uuid' => '3635d4f6-3b26-4e01-836c-51ad44c84da7',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Physical biology',
    'description' => '',
    'format' => 'webedit',
    'weight' => '6',
    'uuid' => '367cc2ed-a2d3-4fc9-b0ed-d2e2500b7edf',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Computational biology and chemistry',
    'description' => '',
    'format' => 'webedit',
    'weight' => '5',
    'uuid' => '3e231c83-a229-426d-9d93-c739ea57a8d2',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Medication management',
    'description' => '',
    'format' => 'webedit',
    'weight' => '3',
    'uuid' => '453e2d4a-1e0a-4d06-a773-79d4c8c503c7',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Health policy',
    'description' => '',
    'format' => 'webedit',
    'weight' => '25',
    'uuid' => '49d98f26-c9b7-491a-929a-33ab18ed2754',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Protein and cellular engineering',
    'description' => '',
    'format' => 'webedit',
    'weight' => '8',
    'uuid' => '4ea29385-07b7-4207-93e9-98278fbd069f',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Neurology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => '4ff38990-f86f-4e9f-97a6-866249c85356',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Doping control in sports',
    'description' => '',
    'format' => 'webedit',
    'weight' => '53',
    'uuid' => '532d5435-63b3-48c4-85ce-9884a8c0990d',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Dietary supplements',
    'description' => '',
    'format' => 'webedit',
    'weight' => '42',
    'uuid' => '5418faa5-d3f1-4197-bb1e-fdb1aca66c64',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => '0',
    'uuid' => '5558453d-485d-499e-8067-f66ad8cb3bdf',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Drug safety',
    'description' => '',
    'format' => 'webedit',
    'weight' => '57',
    'uuid' => '565851c5-5dee-4c2c-ae98-95daf4a2454e',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Medicare Part D',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '5972f028-f2b2-4845-b3df-2c840a3870a7',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Poison control',
    'description' => '',
    'format' => 'webedit',
    'weight' => '19',
    'uuid' => '6af91149-3421-4f5e-8a4c-09a1b64efc4b',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Chemical biology and medicinal chemistry',
    'description' => '',
    'format' => 'webedit',
    'weight' => '7',
    'uuid' => '6c959cc5-dbaa-4ceb-b5ba-946149d50858',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Managed care',
    'description' => '',
    'format' => 'webedit',
    'weight' => '2',
    'uuid' => '6fd321b2-b267-4b49-bc6c-4211134d8d34',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Cellular and molecular engineering',
    'description' => '',
    'format' => 'webedit',
    'weight' => '4',
    'uuid' => '78882ec3-4f35-40b2-9d62-6b08bb1ff502',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Integrative and complementary therapies',
    'description' => '',
    'format' => 'webedit',
    'weight' => '8',
    'uuid' => '794acf34-fb3c-4ccd-95b4-7ebf97b0acc5',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Drug information',
    'description' => '',
    'format' => 'webedit',
    'weight' => '54',
    'uuid' => '7d40598d-7a18-4069-9d57-79d664cb367c',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Antibiotic management',
    'description' => '',
    'format' => 'webedit',
    'weight' => '39',
    'uuid' => '7e782828-30e2-4a7a-b235-f67d4b4dbfd5',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Drug device sciences',
    'description' => '',
    'format' => 'webedit',
    'weight' => '0',
    'uuid' => '7ef698e3-f684-489a-9178-1bf5590b3f58',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Hypertension',
    'description' => '',
    'format' => 'webedit',
    'weight' => '14',
    'uuid' => '84a43799-b14a-4d79-b500-6da23e226dc9',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Drug interactions',
    'description' => '',
    'format' => 'webedit',
    'weight' => '55',
    'uuid' => '88447100-7165-4eab-824b-bd010e856ec9',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Clinical pharmacokinetics',
    'description' => '',
    'format' => 'webedit',
    'weight' => '27',
    'uuid' => '888750c5-03ad-42f6-9818-c7543c81f03c',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Critical care',
    'description' => '',
    'format' => 'webedit',
    'weight' => '33',
    'uuid' => '8974d551-4e81-4ce0-b7bd-dd6096334642',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Primary care',
    'description' => '',
    'format' => 'webedit',
    'weight' => '21',
    'uuid' => '8bdda531-5b00-4c64-b1e8-f2ef65882a2d',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Clinical nutrition support',
    'description' => '',
    'format' => 'webedit',
    'weight' => '28',
    'uuid' => '8d487c4a-6d26-4bf2-b5c3-b0f5a94d645d',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Tobacco cessation',
    'description' => '',
    'format' => 'webedit',
    'weight' => '23',
    'uuid' => '8eb2bfab-6780-4a2f-95fc-b12979a0e41d',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Pharmacogenomics',
    'description' => '',
    'format' => 'webedit',
    'weight' => '1',
    'uuid' => '8f0c90d7-c1f5-4eac-9c7b-976bede4a571',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Cardiology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '34',
    'uuid' => '915abb83-3f0d-42cc-aacc-c638af8b53a8',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Health promotion',
    'description' => NULL,
    'format' => NULL,
    'weight' => '10',
    'uuid' => '915b68c2-ee6d-4a10-8d8e-2156581a0e62',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'HIV/AIDS',
    'description' => NULL,
    'format' => NULL,
    'weight' => '12',
    'uuid' => '99a2677e-f5cb-41db-a640-a040013a2e00',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Drug testing',
    'description' => '',
    'format' => 'webedit',
    'weight' => '56',
    'uuid' => '9b4527a3-3b0d-448d-92ad-3acc3356613a',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Psychiatry',
    'description' => NULL,
    'format' => NULL,
    'weight' => '22',
    'uuid' => '9d6fe4b0-30f6-42e3-89a5-2ee888ff956a',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Clinical toxicology',
    'description' => '',
    'format' => 'webedit',
    'weight' => '30',
    'uuid' => 'a4394d3c-bc2f-40e4-9cc8-a9f6ab7771c9',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Targeted therapies',
    'description' => '',
    'format' => 'webedit',
    'weight' => '24',
    'uuid' => 'a6bdbced-136a-4a8f-9425-e5f60b3c49b4',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Asthma',
    'description' => NULL,
    'format' => NULL,
    'weight' => '40',
    'uuid' => 'a95a5209-586d-4527-b516-ebddb7e3bc3e',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Infectious diseases',
    'description' => '',
    'format' => 'webedit',
    'weight' => '13',
    'uuid' => 'ac5c892d-92c8-4466-b803-cc4029097dac',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Disease prevention',
    'description' => '',
    'format' => 'webedit',
    'weight' => '43',
    'uuid' => 'ac7d86de-3e38-4667-a2d3-8d52a5479c40',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Malaria and HIV co-infection',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => 'ad8efa6f-3dc9-4463-b484-f15ee4d52ab2',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Obesity',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => 'ae350391-6687-4039-b740-adc15cda2560',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'International',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => '5',
    'uuid' => 'af200030-8073-4660-bb62-2055779e8c9e',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Hematology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'b0e01e26-75a3-4e94-84d1-f988c5d75754',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Therapeutic bioengineering',
    'description' => '',
    'format' => 'webedit',
    'weight' => '2',
    'uuid' => 'b1bc5e16-2a0b-4927-80a1-1b169a05970a',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Oncology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => 'b3c65e8d-bc0b-4367-b309-b14a7e70b466',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Gastroenterology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '49',
    'uuid' => 'bb0ca471-53bb-4c5f-aeac-4fae6d152c9e',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Adverse medication effects',
    'description' => '',
    'format' => 'webedit',
    'weight' => '58',
    'uuid' => 'bb60662c-ea78-4cf8-a699-79820dd233a9',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Toxicology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '18',
    'uuid' => 'c50ef4cc-38a6-441f-8fb7-6d01aba16d62',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Patient Care',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => '2',
    'uuid' => 'c6029b86-7bd4-4ed3-aea8-cf15b3e8c0ae',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Appointments',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => '4',
    'uuid' => 'c746e3ae-2e66-463a-91d3-5c981dbdb9ea',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Women\'s health',
    'description' => '',
    'format' => 'webedit',
    'weight' => '17',
    'uuid' => 'c853948a-e616-4da8-89fc-8ac4b8f97d40',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Medicare outreach',
    'description' => '',
    'format' => 'webedit',
    'weight' => '1',
    'uuid' => 'c8e349e2-5d9f-4238-834a-5052437c91d7',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Family practice',
    'description' => '',
    'format' => 'webedit',
    'weight' => '47',
    'uuid' => 'cb2f2be2-357d-458d-87e1-fe5c07d81add',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => '1',
    'uuid' => 'd12a6ce3-d85f-48db-a7d1-0ed91bc8bb4f',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Epidemiology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '45',
    'uuid' => 'd6b17dd5-f93a-4e3d-bef0-a5583d0d494b',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Economics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '51',
    'uuid' => 'dd281087-92d2-43c9-aabf-e7382ad6b105',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Diabetes',
    'description' => '',
    'format' => 'webedit',
    'weight' => '32',
    'uuid' => 'dfd0b772-4245-471b-8f06-da0639e76f08',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Honors and Awards',
    'description' => '',
    'format' => 'panopoly_wysiwyg_text',
    'weight' => '3',
    'uuid' => 'e2460664-487f-405e-a722-757036a09e85',
    'vocabulary_machine_name' => 'categories',
  );
  $terms[] = array(
    'name' => 'Pharmaceutical compounding',
    'description' => '',
    'format' => 'webedit',
    'weight' => '16',
    'uuid' => 'e34feeff-75e8-489a-82b8-8b8d30bcc63d',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Ambulatory care',
    'description' => '',
    'format' => 'webedit',
    'weight' => '36',
    'uuid' => 'ed82f13b-8ed0-453e-a9a4-4bb363170d1a',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Endocrinology',
    'description' => NULL,
    'format' => NULL,
    'weight' => '50',
    'uuid' => 'ee9f4e69-e86a-4a77-9a75-88ddcd23e6b5',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Genetic testing',
    'description' => NULL,
    'format' => NULL,
    'weight' => '48',
    'uuid' => 'f379cf9c-6be0-480a-9c83-ff30a59571e6',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Health services and policy research',
    'description' => '',
    'format' => 'webedit',
    'weight' => '10',
    'uuid' => 'f3a59663-252a-48a6-a5d9-522e2158812c',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Evidence-based pharmacotherapy',
    'description' => '',
    'format' => 'webedit',
    'weight' => '46',
    'uuid' => 'f6432348-f473-4959-8fb4-57303354d3ff',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Community pharmacy practice',
    'description' => '',
    'format' => 'webedit',
    'weight' => '31',
    'uuid' => 'f7c5e4cb-11ec-4216-a24c-213e2b58851f',
    'vocabulary_machine_name' => 'person_clinical_expertise',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  $terms[] = array(
    'name' => 'Epilepsy',
    'description' => NULL,
    'format' => NULL,
    'weight' => '44',
    'uuid' => 'f9b2ac5d-52b8-409d-adad-7bd89e8e4add',
    'vocabulary_machine_name' => 'person_clinical_expertise',
  );
  $terms[] = array(
    'name' => 'Computational and systems biology',
    'description' => '',
    'format' => 'webedit',
    'weight' => '3',
    'uuid' => 'fa13382b-b6e5-4a32-aa4a-059c793f8d81',
    'vocabulary_machine_name' => 'research_areas',
    'path' => array(
      'pathauto' => '1',
    ),
  );
  return $terms;
}
