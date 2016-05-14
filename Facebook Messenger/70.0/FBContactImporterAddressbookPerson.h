/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBContactImporterAddressbookPersonName, NSString, FBContactImporterAddressbookPersonCredentialCollection, FBContactImporterAddressBookPersonPropertyCollection, FBContactImporterAddressbookPersonBirthday, UIImage;

@interface FBContactImporterAddressbookPerson : NSObject {

	FBContactImporterAddressbookPersonName* _nameObj;
	NSString* _name;
	FBContactImporterAddressbookPersonCredentialCollection* _phones;
	FBContactImporterAddressbookPersonCredentialCollection* _emails;
	FBContactImporterAddressBookPersonPropertyCollection* _addresses;
	FBContactImporterAddressbookPersonBirthday* _birthday;
	FBContactImporterAddressBookPersonPropertyCollection* _webSites;
	FBContactImporterAddressBookPersonPropertyCollection* _dates;
	FBContactImporterAddressBookPersonPropertyCollection* _socialProfiles;
	FBContactImporterAddressBookPersonPropertyCollection* _relatedNames;
	FBContactImporterAddressBookPersonPropertyCollection* _instantMessages;
	UIImage* _image;
	NSString* _note;
	unsigned _recordID;

}

@property (nonatomic,readonly) FBContactImporterAddressbookPersonName * nameObj;                                    //@synthesize nameObj=_nameObj - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressbookPersonCredentialCollection * phones;                     //@synthesize phones=_phones - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressbookPersonCredentialCollection * emails;                     //@synthesize emails=_emails - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * addresses;                    //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressbookPersonBirthday * birthday;                               //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * webSites;                     //@synthesize webSites=_webSites - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * dates;                        //@synthesize dates=_dates - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * socialProfiles;               //@synthesize socialProfiles=_socialProfiles - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * relatedNames;                 //@synthesize relatedNames=_relatedNames - In the implementation block
@property (nonatomic,readonly) FBContactImporterAddressBookPersonPropertyCollection * instantMessages;              //@synthesize instantMessages=_instantMessages - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSString * note;                                                                //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) unsigned recordID;                                                                   //@synthesize recordID=_recordID - In the implementation block
-(id)initWithName:(id)arg1 emails:(id)arg2 phones:(id)arg3 birthday:(id)arg4 addresses:(id)arg5 webSites:(id)arg6 dates:(id)arg7 socialProfiles:(id)arg8 relatedNames:(id)arg9 instantMessages:(id)arg10 image:(id)arg11 note:(id)arg12 recordID:(unsigned)arg13 ;
-(id)initWithABRecord:(void*)arg1 allFields:(char)arg2 ;
-(char)hasCredentials;
-(id)primaryCredential;
-(FBContactImporterAddressbookPersonName *)nameObj;
-(FBContactImporterAddressBookPersonPropertyCollection *)webSites;
-(FBContactImporterAddressBookPersonPropertyCollection *)instantMessages;
-(FBContactImporterAddressbookPersonBirthday *)birthday;
-(FBContactImporterAddressBookPersonPropertyCollection *)addresses;
-(id)description;
-(NSString *)name;
-(UIImage *)image;
-(FBContactImporterAddressBookPersonPropertyCollection *)dates;
-(NSString *)note;
-(FBContactImporterAddressbookPersonCredentialCollection *)emails;
-(FBContactImporterAddressbookPersonCredentialCollection *)phones;
-(unsigned)recordID;
-(FBContactImporterAddressBookPersonPropertyCollection *)relatedNames;
-(FBContactImporterAddressBookPersonPropertyCollection *)socialProfiles;
@end

