decoder.o decoder.d: $(wildcard decoder.cc decoder.h x86_decoder.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-reg-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-common-hdrs.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-interface.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-build-defines.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-portability.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-types.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-init.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-decode.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-decoded-inst.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-common-defs.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-util.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-inst.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-category-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-extension-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-iclass-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-visibility-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-action-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-convert-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-type-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-nonterminal-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-width-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-element-xtype-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-reg-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-attribute-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-exception-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-iform-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-iform-map.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-isa-set-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-attributes.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-flags.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-flag-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-flag-action-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-gen-table-defs.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-encoder-gen-defs.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-chip-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-element-type-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-storage.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-error-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-chip-features.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-ild.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-accessors.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-state.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-address-width-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-machine-mode-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-syntax-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-reg-class-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-reg-class.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-encode.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-values-interface.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-encoder-iforms.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-encoder-hl.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-patch.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-operand-action.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-version.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-decoded-inst-api.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-print-info.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-disas.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-format-options.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-iformfl-enum.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-rep-prefix.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-agen.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-cpuid-rec.h \
 /home/vanyo/sniper/sniper-7.4/xed_kit/include/xed/xed-cpuid-bit-enum.h)
