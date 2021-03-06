//
//  LFEdittingProtocol.h
//  LFImagePickerController
//
//  Created by LamTsanFeng on 2017/3/17.
//  Copyright © 2017年 LamTsanFeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LFPhotoEditDelegate.h"

@protocol LFEdittingProtocol <NSObject>

/** 代理 */
@property (nonatomic ,weak) id<LFPhotoEditDelegate> editDelegate;

/** 禁用其他功能 */
- (void)photoEditEnable:(BOOL)enable;

/** =====================数据===================== */

/** 数据 */
@property (nonatomic, strong) NSDictionary *photoEditData;

/** =====================绘画功能===================== */

/** 启用绘画功能 */
@property (nonatomic, assign) BOOL drawEnable;
/** 是否可撤销 */
@property (nonatomic, readonly) BOOL drawCanUndo;
/** 撤销绘画 */
- (void)drawUndo;
/** 设置绘画颜色 */
- (void)setDrawColor:(UIColor *)color;

/** =====================贴图功能===================== */
/** 取消激活贴图 */
- (void)stickerDeactivated;
/** 激活选中的贴图 */
- (void)activeSelectStickerView;
/** 删除选中贴图 */
- (void)removeSelectStickerView;
/** 获取选中贴图的内容 */
- (NSString *)getSelectStickerText;
/** 更改选中贴图内容 */
- (void)changeSelectStickerText:(NSString *)text;

/** 创建贴图 */
- (void)createStickerImage:(UIImage *)image;

/** =====================文字功能===================== */

/** 创建文字 */
- (void)createStickerText:(NSString *)text;

/** =====================模糊功能===================== */

/** 启用模糊功能 */
@property (nonatomic, assign) BOOL splashEnable;
/** 是否可撤销 */
@property (nonatomic, readonly) BOOL splashCanUndo;
/** 撤销模糊 */
- (void)splashUndo;
/** 改变模糊状态 */
@property (nonatomic, readwrite) BOOL splashState;

@end
