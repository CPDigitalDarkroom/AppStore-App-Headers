/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TFNTwitterPostalAddress : NSObject {

	char _isDefault;
	NSString* _addressId;
	NSString* _displayName;
	NSString* _fullName;
	NSString* _addressLine1;
	NSString* _addressLine2;
	NSString* _city;
	NSString* _subdivision;
	NSString* _postalCode;
	NSString* _country;

}

@property (nonatomic,retain) NSString * state; 
@property (nonatomic,retain) NSString * zipCode; 
@property (nonatomic,retain) NSString * addressId;                 //@synthesize addressId=_addressId - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * fullName;                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * addressLine1;              //@synthesize addressLine1=_addressLine1 - In the implementation block
@property (nonatomic,retain) NSString * addressLine2;              //@synthesize addressLine2=_addressLine2 - In the implementation block
@property (nonatomic,retain) NSString * city;                      //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * subdivision;               //@synthesize subdivision=_subdivision - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSString * country;                   //@synthesize country=_country - In the implementation block
@property (assign,nonatomic) char isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) char valid; 
+(id)addressFromDictionary:(id)arg1 ;
+(id)stateForZipCode:(id)arg1 ;
-(NSString *)addressLine1;
-(NSString *)zipCode;
-(NSString *)addressLine2;
-(NSString *)subdivision;
-(id)initWithZipCode:(id)arg1 ;
-(id)initWithDisplayName:(id)arg1 residentName:(id)arg2 address1:(id)arg3 address2:(id)arg4 city:(id)arg5 subdivision:(id)arg6 postalCode:(id)arg7 country:(id)arg8 isDefault:(char)arg9 ;
-(id)initWithAddressId:(id)arg1 displayName:(id)arg2 residentName:(id)arg3 address1:(id)arg4 address2:(id)arg5 city:(id)arg6 subdivision:(id)arg7 postalCode:(id)arg8 country:(id)arg9 isDefault:(char)arg10 ;
-(void)setAddressId:(NSString *)arg1 ;
-(void)setAddressLine1:(NSString *)arg1 ;
-(void)setAddressLine2:(NSString *)arg1 ;
-(void)setSubdivision:(NSString *)arg1 ;
-(id)asShippingAddressParametersDictionary;
-(id)asBillingAddressParametersDictionary;
-(NSString *)addressId;
-(id)initWithAddressId:(id)arg1 displayName:(id)arg2 residentName:(id)arg3 address1:(id)arg4 address2:(id)arg5 city:(id)arg6 state:(id)arg7 zip:(id)arg8 isDefault:(char)arg9 ;
-(id)initWithDisplayName:(id)arg1 residentName:(id)arg2 address1:(id)arg3 address2:(id)arg4 city:(id)arg5 state:(id)arg6 zip:(id)arg7 isDefault:(char)arg8 ;
-(void)setZipCode:(NSString *)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(NSString *)city;
-(id)init;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(char)valid;
-(NSString *)displayName;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(char)isDefault;
-(void)setIsDefault:(char)arg1 ;
-(NSString *)fullName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
@end

